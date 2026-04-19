.code64
.global boot
boot:
    mov $stack_top, %rsp
    call kernel_main
    jmp .
.section .bss
.align 16
stack_bottom:
.skip 32768
stack_top:
