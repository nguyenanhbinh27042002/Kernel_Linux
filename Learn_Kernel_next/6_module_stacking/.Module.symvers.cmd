cmd_/home/anhbinh/Build_Kernel/Kernel_Linux/Learn_Kernel_next/6_module_stacking/Module.symvers := sed 's/\.ko$$/\.o/' /home/anhbinh/Build_Kernel/Kernel_Linux/Learn_Kernel_next/6_module_stacking/modules.order | scripts/mod/modpost -m -a  -o /home/anhbinh/Build_Kernel/Kernel_Linux/Learn_Kernel_next/6_module_stacking/Module.symvers -e -i Module.symvers   -T -
