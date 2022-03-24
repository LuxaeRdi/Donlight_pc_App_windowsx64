::===============================================================
:: checks if there is any changes in the repo, if there are downloads the changes
::
::===============================================================
@echo: Hello :), checking for updates....
@echo:
@echo:
@echo:
@echo: fetching repository changes....
@git fetch > fetchCommandResult
@echo:
@echo:
@echo:
@echo: status of the commit....
@git status -uno > statusCommandResult
@echo:
@echo:
@echo:
@Title “app_update_github” 
@echo:

@echo: %statusCommandResult%

@findstr /c:"fatal: unable to access " statusCommandResult >fetchCommandResult

@if %errorlevel%==0 (

	@echo: I was unable to reach the github webpage, are you connected to the internet?
	@echo:
	pause
)

@if %errorlevel%==1 (
	@echo: I was able to reach the github webpage...
	@echo:
	git reset --hard
	git pull
	pause
	
	
::	@findstr /c:"branch is behind" statusCommandResult %tmp_result_file%
::	@echo : %tmp_result_file%
::	@echo: I succesfully reached github webpage
::	@echo:
::	@if %errorlevel%==0 (
::		@set /p userPromtAnswer= " Updates were found, do you want to update donlight pc app?(y/n)"
::		@IF "%userPromtAnswer%"=="y" ( @ECHO ha dicho que si)
::		@IF "%userPromtAnswer%"=="n" ( @ECHO ha dicho que no)
::	)
::
::	@if %errorlevel%==1 (
::		@set /p userPromtAnswer= " No updates were found, everything is up to date"
::		pause
::	)
	
	
)










@del fetchCommandResult
@del statusCommandResult
