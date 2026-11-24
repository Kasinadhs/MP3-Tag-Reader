#ifndef TYPES_H
#define TYPES_H

typedef unsigned int uint;

/* Status */
typedef enum
{
    e_success,
    e_failure
} Status;

typedef struct
{
    mp3_fileview;
    mp3_filename;
};
/* Operation type */
typedef enum
{
    e_encode,
    e_decode,
    e_unsupported
} OperationType;


#endif