module effects
//-----------------Parameters-----------------\\
#(
    parameter VALUE = 50  // Brighten/Darken value
)
//-----------------Ports-----------------\\
(
    input         clk,
    input         rst,
    input         start,
    input  [1:0]  eff,            // effect selector
    input  [23:0] pixel_in,       // Input image data
    
    output reg [23:0] pixel_out,  // Output image data
    output reg        done,
    output [9:0] wr_adrr,  // output to the old data memory for the next pixel address to write
    output [9:0] rd_adrr   // output to the old data memory for the next pixel address to read
);
//-----------------Interconnects-----------------\\
reg crnt_st, nxt_st;
reg  [9:0] rd_address, rd_address_r;
reg  [9:0] wr_address, wr_address_r;
reg  [9:0] count, count_r;
reg  [7:0] temp;
wire [7:0] red, blue, green;
integer temp_r, temp_b, temp_g;


localparam NONE      = 2'b00,
           BRIGHTEN  = 2'b01,
           DARKEN    = 2'b10,
           GRAYSCALE = 2'b11;
			  
localparam IDLE   = 1'b0,
           ACTIVE = 1'b1;


assign blue  = pixel_in[7:0];
assign green = pixel_in[15:8];
assign red   = pixel_in[23:16];

//-----------------Intializing Registers-----------------\\
always @(posedge clk) begin
    if (rst) begin
        rd_address_r <= 0;
        wr_address_r <= 0;
        count_r      <= 0;
        crnt_st      <= IDLE;
    end
    else begin
        rd_address_r <= rd_address;
        wr_address_r <= wr_address;
        count_r      <= count;
        crnt_st      <= nxt_st;
    end
end

//-----------------Effect Logic-----------------\\
always @* begin
    // default values
    rd_address  = rd_address_r;
    wr_address  = wr_address_r;
    count       = count_r;
    nxt_st      = crnt_st;
    done        = 1'b0;
    temp_r      = 0;
    temp_b      = 0;
    temp_g      = 0;
    temp        = 0;
    
    case (crnt_st)

        IDLE : begin

            if (start) begin
                nxt_st        = ACTIVE;
                rd_address    = 0;
                wr_address    = 0;
                done          = 1'b0;
            end 
            else begin
                nxt_st        = IDLE;
                done          = 1'b1;
            end

        end
        ACTIVE : begin
            case (eff)

                NONE : begin
                    pixel_out = pixel_in;
                end

                BRIGHTEN : begin
                    temp_b = blue  + VALUE;
                    temp_g = green + VALUE;
                    temp_r = red   + VALUE;
                    if(temp_b > 255) pixel_out[7:0]   = 8'd255;
                    else             pixel_out[7:0]   = temp_b;
                    if(temp_g > 255) pixel_out[15:8]  = 8'd255;
                    else             pixel_out[15:8]  = temp_g;
                    if(temp_r > 255) pixel_out[23:16] = 8'd255;
                    else             pixel_out[23:16] = temp_r;
                end

                DARKEN : begin
                    temp_b = blue  - VALUE;
                    temp_g = green - VALUE;
                    temp_r = red   - VALUE;
                    if(temp_b < 0) pixel_out[7:0]   = 8'd0;
                    else           pixel_out[7:0]   = temp_b;
                    if(temp_g < 0) pixel_out[15:8]  = 8'd0;
                    else           pixel_out[15:8]  = temp_g;
                    if(temp_r < 0) pixel_out[23:16] = 8'd0;
                    else           pixel_out[23:16] = temp_r;
                end

                GRAYSCALE : begin
                    temp = ((red + green + blue + 1) >> 2);
                    pixel_out = {temp[7:0],temp[7:0],temp[7:0]};
                end

                default: pixel_out = 24'bx;
            endcase

            if(count_r == 899) begin
                count  = 0;
                done   = 1'b1;
                nxt_st = IDLE;
            end
            else begin
                nxt_st     = ACTIVE;
                rd_address = rd_address_r + 1;
                wr_address = wr_address_r + 1;
                count      = count_r + 1;
                done       = 1'b0;
            end
            end


    endcase
end

//-----------------Output-----------------\\
assign wr_adrr  = wr_address_r;
assign rd_adrr  = rd_address_r;

endmodule 