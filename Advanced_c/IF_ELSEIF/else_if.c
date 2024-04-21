#include <stdio.h>

int main()
{
    float Basic_pay_rate = 12;
    float Ovr_time_pay_rate = 18;
    float Wrk_hour;
    float Pay;
    float Ovr_time_pay;
    float Total_pay;
    float Tax300;
    float Tax450;
    float Tax_beyond;
    float Total_tax;

    printf("Enter your working hour of the week\n");
    scanf("%f", &Wrk_hour);

    if (Wrk_hour <= 40)
    {
        Total_pay = Wrk_hour * Basic_pay_rate;
        printf("You will be paid %f\n", Total_pay);
    }
    else if (Wrk_hour > 40)
    {
        Pay = 40 * Basic_pay_rate;
        Ovr_time_pay = (Wrk_hour - 40) * 18;
        Total_pay = Pay + Ovr_time_pay;
        printf("You will be paid %f\n", Total_pay);
    }

    if (Total_pay <= 300)
    {
        Total_tax = (15.0 / 100.0) * Total_pay;
        printf("You will pay %f as tax\n", Total_tax);
    }
    else if (Total_pay > 300)
    {
        Total_tax = (15 / 100) * 300;
        if (Total_pay <= 450)
        {
            Tax300 = (15.0 / 100.0) * 300;
            Tax450 = (Total_pay - 300) * (20.0 / 100.0);
            Total_tax = Tax300 + Tax450;
        }
        if (Total_pay > 450)
        {
            Tax300 = (15.0 / 100.0) * 300;
            Tax450 = (450 - 300) * (20.0 / 100);
            Tax_beyond = (Total_pay - 450) * (25.0 / 100);
            Total_tax = Tax300 + Tax450 + Tax_beyond;
        }
        printf("You will pay %f as tax\n", Total_tax);
    }

    return 0;
}