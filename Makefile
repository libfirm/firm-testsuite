.PHONY: all clean report

all: report

report:
	@echo "===> REPORT"
	@./makereport

clean:
	@echo "===> CLEAN"
	@rm -f *.o *.s *.vcg a.out
