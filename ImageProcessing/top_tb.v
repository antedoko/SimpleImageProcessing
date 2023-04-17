//-----------------Compiler Directives-----------------\\
`timescale 1ns/1ps
module top_tb;

parameter FACTOR = 2;  // Down-sampling factor
parameter VALUE = 50;  // Brighten/Darken value
parameter BPP = 3;
parameter HIEGHT = 30;
parameter WIDTH = 30;
parameter integer PEXILS = HIEGHT*WIDTH;
// parameter ADDR_WR = (PEXILS/(FACTOR**2));
parameter SZ = (8*BPP)-1;
parameter TICK_PER_HALF = 2604;    // Fsys/(2*baudrate)
// parameter INFILE  = "input.txt";
parameter OUTFILE = "output.txt";

reg clk;
reg rst;
reg start;
reg shr_or_eff;
reg [1:0] effect; 

wire tx;
wire tx_active;
wire done,op_done;

// DUT
top #(.FACTOR(FACTOR), .VALUE(VALUE), .BPP(BPP), .HIEGHT(HIEGHT), .WIDTH(WIDTH), .TICK_PER_HALF(TICK_PER_HALF)) dut(
    .clk(clk),
    .rst(rst),
    .effect(effect),
    .start(start),
    .shr_or_eff(shr_or_eff),

    .tx(tx),
    .tx_active(tx_active),
    .done(done),
	 .op_done(op_done)
);

// system clock
initial begin
    clk = 1'b0;
    forever #5 clk =~clk;
end

// resetting the system
initial begin
    rst   = 1'b0;
    start = 1'b0;
    #10;
    rst   = 1'b1;
    #10;
    rst   = 1'b0;
    #10;
    start = 1'b1;
    #500;
    start = 1'b0;
end

initial begin
    shr_or_eff = 1;
    effect     = 2'b00;
end


// integer file;
// integer j;

// // write content to file
// always @(posedge b_clk) begin
//     if(active_flag)
//     file = $fopen(OUTFILE, "a");
//     $fwrite(file, "%b\n", tx);
//     $fclose(file);
// end

endmodule 