# helper for test script
execute_cmd() {
	CMD="$1"
	EXTRA_MSG="$2"

	if ! /bin/bash -c "$CMD" >> "$logfile" 2>&1; then
		RES="$?"
		echo -n "$EXTRA_MSG"
		exit 1
	fi
}
