#include "holberton.h"
/**
 * _printf - print all (printf reecreation)
 * @format: format specifier
 * Return: count
 */
int _printf(const char *format, ...) {
va_list arg;
va_start(arg,format);
int i = 0;
int len = 0;
while(format[i]!='\0')
{
if(format[i] == '%'){
if(format[i+1] == 'd' || format[i+1] == 'i'){
len = len + print_int((int)va_arg(arg,int));
i = i + 2;
}
else if(format[i+1] == 'c'){
len = len + print_char((char)va_arg(arg,int));
i = i + 2;
}
else if(format[i+1] == 's'){
len = len + print_string(va_arg(arg,char *));
i = i + 2;
}
else if(format[i+1] == 'b'){
len = len + print_int(tobin(va_arg(arg,int)));
i = i + 2;
}
else if(format[i+1] == 'o'){
len = len + print_int(tooct(va_arg(arg,int)));
i = i + 2;
}
else if(format[i+1] == 'X'){
len = len + print_int(toHEX(va_arg(arg,int)));
i = i + 2;
}
else if(format[i+1] == 'x'){
len = len + print_int(tohex(va_arg(arg,int)));
i = i + 2;
}
else if(format[i+1] == 'p'){
len = len + print_pointer(va_arg(arg,unsigned long));
i = i + 2;
}
} 
else 
len = len + print_char(format[i]);
i++;
}
return (len);
}
