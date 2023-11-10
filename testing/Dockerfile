FROM gcc:latest AS build-stage
COPY . .
RUN gcc -c lib.c
RUN gcc -c main.c
RUN gcc lib.o main.o -o main


FROM archlinux:latest AS run-stage
COPY --from=build-stage main main
RUN chmod +x main
RUN mkdir libl
RUN curl 
CMD ["./main"]
