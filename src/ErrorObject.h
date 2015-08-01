#ifndef ErrorObject_H
#define ErrorObject_H

typedef enum
{
  FAIL_TO_CONVERT_TO_PREFIX,
  NOT_NUMBER_AFTER_OPERATOR,
  NEITHER_OPERATOR_NOR_NUMBER,
  NOT_INFIX_OPERATOR,
  NOT_POSTFIX_INFIX_OPERATOR,
  NOT_OPERATOR_AFTER_NUMBER,
  CANNOT_PAIR_THE_BRACKET,
  UNKNOWN_ERROR,
  UNHANDLE_TOKEN_TYPE,
} ErrorCode;

typedef struct
{
  char *errorMsg;
  ErrorCode errorCode;
} ErrorObject;
  

void throwError(char *message, ErrorCode errCode);
void freeError(ErrorObject *errObj);

#endif // ErrorObject_H
