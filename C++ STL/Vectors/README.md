# Vectors

Vectors are basically just like array but dynamic.

The vectors are dynamic in nature are can be of any size. If we don't assign any size then also it will be created. We can add values dynamically in this *container*.
If we have defined a size already then also we can add values in the container and it can increase its size.

## Iterators

Iterators are basically used point to some memory address where the container's elements are being stored.

* *v.begin()* points to the first memory location of the container i.e, to the memory location where the first element of the container is stored.
* *v.end()* points to the memory location next to the last element. And if we do it-- then it will be shifted to last element's memory location. (where 'it' is an iterator)
* *v.back()* points to the memory location of the container where the last element is stored.