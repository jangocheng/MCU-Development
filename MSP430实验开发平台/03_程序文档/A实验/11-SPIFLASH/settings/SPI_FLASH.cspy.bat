@REM This bat file has been generated by the IAR Embeddded Workbench
@REM C-SPY interactive debugger,as an aid to preparing a command
@REM line for running the cspybat command line utility with the
@REM appropriate settings.
@REM
@REM After making some adjustments to this file, you can launch cspybat
@REM by typing the name of this file followed by the name of the debug
@REM file (usually an ubrof file). Note that this file is generated
@REM every time a new debug session is initialized, so you may want to
@REM move or rename the file before making changes.
@REM
@REM Note: some command line arguments cannot be properly generated
@REM by this process. Specifically, the plugin which is responsible
@REM for the Terminal I/O window (and other C runtime functionality)
@REM comes in a special version for cspybat, and the name of that
@REM plugin dll is not known when generating this file. It resides in
@REM the $TOOLKIT_DIR$\bin folder and is usually called XXXbat.dll or
@REM XXXlibsupportbat.dll, where XXX is the name of the corresponding
@REM tool chain. Replace the '<libsupport_plugin>' parameter
@REM below with the appropriate file name. Other plugins loaded by
@REM C-SPY are usually not needed by, or will not work in, cspybat
@REM but they are listed at the end of this file for reference.


"C:\Program Files (x86)\IAR Systems\Embedded Workbench 6.0 Evaluation\common\bin\cspybat" "C:\Program Files (x86)\IAR Systems\Embedded Workbench 6.0 Evaluation\430\bin\430proc.dll" "C:\Program Files (x86)\IAR Systems\Embedded Workbench 6.0 Evaluation\430\bin\430fet.dll"  %1 --plugin "C:\Program Files (x86)\IAR Systems\Embedded Workbench 6.0 Evaluation\430\bin\<libsupport_plugin>" --backend -B "--hardware_multiplier" "32" "--hwmult_type" "8" "-p" "C:\Program Files (x86)\IAR Systems\Embedded Workbench 6.0 Evaluation\430\config\MSP430F5438A.ddf" "--core=430Xv2" "--data_model=small" "--iv_base" "0xFF80" "--no_wrap_around" "-d" "fet" "--erase_main_and_info" "--set_putchar_breakpoint" "--set_getchar_breakpoint" "--derivative" "MSP430F5438A" "--vccvoltage=3.3" "--protocol" "automatic" "--eem" "EMEX_LARGE_5XX" "--port" "Automatic" "--connection" "ti_usb" "--settlingtime=0" "--msp430_dll" "msp430.dll" 


@REM Loaded plugins:
@REM    C:\Program Files (x86)\IAR Systems\Embedded Workbench 6.0 Evaluation\430\bin\430libsupport.dll
@REM    C:\Program Files (x86)\IAR Systems\Embedded Workbench 6.0 Evaluation\430\plugins\lcd\lcd.dll
@REM    C:\Program Files (x86)\IAR Systems\Embedded Workbench 6.0 Evaluation\common\plugins\CodeCoverage\CodeCoverage.dll
@REM    C:\Program Files (x86)\IAR Systems\Embedded Workbench 6.0 Evaluation\common\plugins\Profiling\Profiling.dll
@REM    C:\Program Files (x86)\IAR Systems\Embedded Workbench 6.0 Evaluation\common\plugins\stack\stack.dll
@REM    C:\Program Files (x86)\IAR Systems\Embedded Workbench 6.0 Evaluation\common\plugins\SymList\SymList.dll
