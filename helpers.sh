# helper for test script
execute_cmd() {
	CMD="$1"
	EXTRA_MSG="$2"
	RES_VAR="$3"

	echo "Command: $CMD" >> "$logfile"
	command /bin/bash -c "$CMD" >> "$logfile" 2>&1
	RES="$?"
	echo >> "$logfile"
	if [ "$RES" != "0" ]; then
		if test "$RES" -gt 127; then
			ERROR="$EXTRA_MSG aborted"
			eval $RES_VAR="aborted"
		else
			ERROR="$EXTRA_MSG"
			eval $RES_VAR="failed"
		fi
		return 1
	fi
	eval $RES_VAR="ok"
	return 0
}
