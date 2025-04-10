As a employee, I want to be able to clock in so that my attendance time can be recorded
{
	Basic Flow {
        (User) 1. The employee shall log in to attendance system.
        (User) 2. The employee shall select clock in option.
        (System) 3. When clock in is confirmed, the system shall display a confirmation message and record time.
	}
	Alternative Flow {
        A. At any time, invalid data is entered :
            1. The system reject input.
            2. The system display an error message indicating valid input criteria.
            3. The employee adjust input and retry.
	}
}

As a employee, I want to be able to clock out so that my departure time can be recorded{
	Basic Flow {
        (User) 1. The employee shall log in to attendance system.
        (User) 2. The employee shall select clock out option.
        (System) 3. When clock out is confirmed, the system shall display a confirmation message and record time.
	}
	Alternative Flow {
        A. At any time, invalid data is entered :
            1. The system reject input.
            2. The system display an error message indicating valid input criteria.
            3. The employee adjust input and retry.
	}
}

As a employee, I want to be able to view my attendance records so that I can understand my working hours{
	Basic Flow {
        (User) 1. The employee shall log in to attendance system.
        (User) 2. The employee shall select view attendance records option.
        (System) 3. The system shall display employee attendance history including clock in and clock out times.
	}
	Alternative Flow {
        A. At any time, invalid data is entered :
            1. The system reject input.
            2. The system display an error message indicating valid input criteria.
            3. The employee adjust input and retry.
	}
}

 As a manager, I want to be able to view attendance records of a specific employee so that I can evaluate their work performance{
	Basic Flow {
        (User) 1. The manager shall log in to attendance system.
        (User) 2. The manager shall select a specific employee and request to view their attendance records.
        (System) 3. The system shall display selected employee attendance history including clock in and clock out times.
	}
	Alternative Flow {
        A. At any time, invalid data is entered :
            1. The system reject input.
            2. The system display an error message indicating valid input criteria.
            3. The manager adjust input and retry.
	}
}

As a manager, I want to be able to generate attendance reports so that employee attendance can be summarized{
	Basic Flow {
        (User) 1. The manager shall log in to attendance system.
        (User) 2. The manager shall select generate attendance report option.
        (System) 3. The system shall compile data and generate attendance report.
	}
	Alternative Flow {
        A. At any time, invalid data is entered :
            1. The system reject input.
            2. The system display an error message indicating valid input criteria.
            3. The manager adjust input and retry.
	}
}

As a employee, I want to automatically associate my shifts so that my working hours can be accurately recorded{
	Basic Flow {
        (User) 1. The employee shall log in to attendance system.
        (System) 2. When employee logs in, the system shall automatically associate employee shift schedule.
        (System) 3. The system shall display confirmation of associated shift.
	}
	Alternative Flow {
        A. At any time, invalid data is entered :
            1. The system reject input.
            2. The system display an error message indicating valid input criteria.
            3. The employee adjust input and retry.
	}
}

As a manager, I want to record usage of clock in devices so that device usage can be tracked{
	Basic Flow {
        (User) 1. The manager shall log in to attendance system.
        (System) 2. The system shall automatically record each instance of clock in device usage.
        (System) 3. The system shall display device usage records upon request.
	}
	Alternative Flow {
        A. At any time, invalid data is entered :
            1. The system reject input.
            2. The system display an error message indicating valid input criteria.
            3. The manager adjust input and retry.
	}
}

As a employee, I want to prompt an error clocking in fails so that I can correct it promptly{
	Basic Flow {
        (User) 1. The employee shall attempt to clock in using attendance system.
        (System) 2. If clock in fails, the system shall display an error message indicating reason for failure.
        (User) 3. The employee shall correct issue based on error message.
	}
	Alternative Flow {
        A. At any time, invalid data is entered :
            1. The system reject input.
            2. The system display an error message indicating valid input criteria.
            3. The employee adjust input and retry.
	}
}


