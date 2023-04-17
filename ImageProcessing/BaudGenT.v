//-----------------Compiler Directives-----------------\\
`timescale 1ns/1ps
module BaudGenT
//-----------------Parameters-----------------\\
#(
    parameter TICK_PER_HALF = 2604 // BR = 9600  // Fsys/(2*baudrate)
)
//-----------------Ports-----------------\\
(
    input              clock,            
    input wire         rst,               

    output reg         baud_clk           
);
//-----------------interconnects-----------------\\
reg [11:0] clock_ticks, final_value;


//-----------------Timer logic-----------------\\
always @(posedge clock)
begin
    if(rst)
    begin
        clock_ticks <= 0; 
        baud_clk    <= 1'b0; 
    end
    else
    begin
        if (clock_ticks == TICK_PER_HALF)
        begin
            clock_ticks <= 0; 
            baud_clk    <= ~baud_clk; 
        end 
        else
        begin
            clock_ticks <= clock_ticks + 1'd1;
            baud_clk    <= baud_clk;
        end
    end 
end

endmodule 