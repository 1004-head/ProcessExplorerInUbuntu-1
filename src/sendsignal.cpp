#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void SendSignal(int pid, int signalnum){

    char kill_cmd[1024];
    
    sprintf(kill_cmd, "kill -%d %d", signalnum, pid); //PID�� signal�ɼ��� ���� kill��ɾ� ����

    system(kill_cmd);

}