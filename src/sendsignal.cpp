#include <stdio.h>
#include <stdlib.h>

void SendSignal(int pid, int signalnum){

    char *kill_cmd;
    
    sprintf(kill_cmd, "kill -%d %d", signalnum, pid); //PID�� signal�ɼ��� ���� kill��ɾ� ����

    system(kill_cmd);

}