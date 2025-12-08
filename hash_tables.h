typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
