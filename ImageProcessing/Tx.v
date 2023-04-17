//-----------------Compiler Directives-----------------\\
`timescale 1ns/1ps
module Tx
(
    input wire           rst,                
    input wire           send,              
    input wire           baud_clk,           
    input wire [23:0]  data_in,            
  
    output reg 	         data_tx, 	         
	output reg  	     active_flag,        
	output reg  	     done_flag           
);

//-----------------Interconnects-----------------\\
reg [28:0]  frame_r, frame_man;
reg [4:0]   stop_count, stop_count_r;
reg         crnt_st, nxt_st;

//-----------------Encoding the states-----------------\\
localparam IDLE   = 1'b0,
           ACTIVE = 1'b1;

//-----------------Frame Generation-----------------\\
always @(posedge baud_clk) begin
    // if (crnt_st == IDLE)  frame_r <= {1'b0,data_in[23:16],1'b1,1'b0,data_in[15:8],1'b1,1'b0,data_in[7:0]};
    if (crnt_st == IDLE)  frame_r <= {data_in[23:16],1'b0,1'b1,data_in[15:8],1'b0,1'b1,data_in[7:0],1'b0};
    else                  frame_r <= frame_man;
end

//-----------------Counter Logic-----------------\\
always @(posedge baud_clk) begin
    if (rst) stop_count_r <= 0;
    else     stop_count_r <= stop_count;
end

//-----------------Transmission Logic FSM-----------------\\
always @(posedge baud_clk, posedge rst) begin
    if (rst) crnt_st   <= IDLE;
	else     crnt_st   <= nxt_st;
end

always @(*) begin
    // default values
    nxt_st       = crnt_st;
    frame_man    = frame_r;
    stop_count   = stop_count_r;
    done_flag    = 1'b1;
    active_flag  = 1'b0;
    data_tx      = 1'b1;

    case (crnt_st)

        IDLE: begin
            stop_count         = 0;
            active_flag    = 1'b0;
            done_flag      = 1'b1;
            if (send) begin
                nxt_st         = ACTIVE;
                active_flag    = 1'b1;
                done_flag      = 1'b0;
            end
            else      nxt_st   = IDLE;
        end 

        ACTIVE: begin
            active_flag  = 1'b1;
            done_flag    = 1'b0;
            data_tx      = frame_man[0];
            frame_man    = frame_r >> 1;
            stop_count   = stop_count_r + 1;
            if(stop_count == 29) begin
                nxt_st  = IDLE;
                active_flag    = 1'b0;
                done_flag      = 1'b1;
            end
            else                 nxt_st  = ACTIVE;
        end

        default: nxt_st = IDLE;
    endcase
end

endmodule  