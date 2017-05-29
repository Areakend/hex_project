#ifndef POSITION_H
#define POSITION_H

void free_data(int ***data, size_t xlen, size_t ylen);
int ***alloc_data(size_t xlen, size_t ylen, size_t zlen);

#endif
