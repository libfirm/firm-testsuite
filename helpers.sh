# helper for test script
execute_cmd() {
	CMD="$1"
	EXTRA_MSG="$2"

	command /bin/bash -c "$CMD" >> "$logfile" 2>&1
	RES="$?"
	if [ "$RES" != "0" ]; then
		echo -n "$EXTRA_MSG"
		if test "$RES" -gt 127; then
			echo -n " aborted"
		fi
		exit 1
	fi
}
