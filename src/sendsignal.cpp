#include <stdio.h>
#include <stdlib.h>

void SendSignal(int PID, int signalNum)
{

    char *killCMD;
    
    sprintf(killCMD, "kill -%d %d", signalNum, PID); //PID�� signal�ɼ��� ���� kill��ɾ� ����

    system(killCMD);

}