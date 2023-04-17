module rom
//-----------------Parameters-----------------\\
#(
    parameter HIEGHT = 30,
    parameter WIDTH = 30,
    parameter BPP = 3,
    parameter PEXILS = HIEGHT*WIDTH
)
//-----------------Ports-----------------\\
(
    input wire [9:0] rd_addr,

    output reg  [(8*BPP)-1:0]  read_data
);

//-----------------Memory Declaration-----------------\\
reg [(8*BPP)-1:0] data_mem [0:PEXILS-1];

//-----------------Memory Initialization-----------------\\
initial begin
    $readmemh("input.txt", data_mem);
end

//-----------------Reading combinationally-----------------\\
always @(rd_addr) begin
    read_data  = data_mem[rd_addr];
end
 
endmodule   