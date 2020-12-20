#include <vhdlCStubs.h>
uint32_t DOTP(uint8_t R)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call DOTP ");
append_int(buffer,1); ADD_SPACE__(buffer);
append_uint8_t(buffer,R); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,32); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint32_t result = get_uint32_t(buffer,&ss);
return(result);
}
uint32_t dotP_0(uint8_t R)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call dotP_0 ");
append_int(buffer,1); ADD_SPACE__(buffer);
append_uint8_t(buffer,R); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,32); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint32_t result = get_uint32_t(buffer,&ss);
return(result);
}
uint32_t dotP_1(uint8_t R)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call dotP_1 ");
append_int(buffer,1); ADD_SPACE__(buffer);
append_uint8_t(buffer,R); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,32); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint32_t result = get_uint32_t(buffer,&ss);
return(result);
}
void global_storage_initializer_()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call global_storage_initializer_ ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
void multiplyMatrixVector()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call multiplyMatrixVector ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
void mvp_daemon()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call mvp_daemon ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
void readMatrix()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call readMatrix ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
void readVector()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call readVector ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
