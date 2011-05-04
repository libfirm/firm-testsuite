all: report

report:
	@echo "===> REPORT"
	@./makereport.py

clean:
	@echo "===> CLEAN"
	@rm -f *.o *.s *.vcg a.out
