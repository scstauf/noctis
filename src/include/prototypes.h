/**
 * 	noctis: a hybrid-typed, object-oriented, interpreted, programmable command line shell.
 *
 *		scstauf@gmail.com
 **/

#ifndef PROTOTYPES_H
#define PROTOTYPES_H

string getPrompt();

int random(int low, int high);
double random(double min, double max);
string random(string start, string sc);

vector<Method>      methods;
vector<Object>      objects;
vector<Variable>    variables;
vector<List>        lists;
vector<Constant>    constants;
vector<Method>      ifStatements;
vector<Method>      forLoops;
vector<Method>      whileLoops;
vector<string>      args;
vector<Module>      modules;
vector<Script>      scripts;

Switch mainSwitch;

vector<Constant>    removeConstant(vector<Constant> v, string target);
vector<List>        removeList(vector<List> v, string target);
vector<Method>      removeMethod(vector<Method> v, string target);
vector<Object>      removeObject(vector<Object> v, string target);
vector<Variable>    removeVariable(vector<Variable> v, string target);

void InternalCallMethod(string arg0, string arg1, string before, string after);
void InternalCreateMethod(string arg0, string arg1);
void InternalCreateModule(string s);
void InternalCreateObject(string arg0);
void InternalEncryptDecrypt(string arg0, string arg1);
void InternalForget(string arg0, string arg1);
void InternalInspect(string arg0, string arg1, string before, string after);
void InternalGetEnv(string arg1, string after, int mode);
void InternalGlobalize(string arg0, string arg1);
void InternalOutput(string arg0, string arg1);
void InternalRemember(string arg0, string arg1);
bool InternalReturn(string arg0, string arg1, string before, string after);


string cleanString(string st);

string __CurrentLine;
string __CurrentMethodObject;
string __CurrentModule;
string __CurrentObject;
string __CurrentScript;
string __CurrentScriptName;
string __GoTo;
string __LastValue;
string __LogFile;
string __Noctis;
string __PreviousScript;
string __PromptStyle;
string __SavedVarsPath;
string __SavedVars;
string __SwitchVarName;
string __DefaultLoopSymbol;
string __Null;
double __NullNum;

int __ArgumentCount;
int __BadMethodCount;
int __BadObjectCount;
int __BadVarCount;
int __CurrentLineNumber;
int __IfStatementCount;
int __ForLoopCount;
int __ParamVarCount;
int __WhileLoopCount;

bool __IsCommented;
bool __MultilineComment;

bool __Breaking;
bool __DefiningIfStatement;
bool __DefiningForLoop;
bool __DefiningLocalForLoop;
bool __DefiningLocalSwitchBlock;
bool __DefiningLocalWhileLoop;
bool __DefiningMethod;
bool __DefiningModule;
bool __DefiningNest;
bool __DefiningObject;
bool __DefiningObjectMethod;
bool __DefiningParameterizedMethod;
bool __DefiningPrivateCode;
bool __DefiningPublicCode;
bool __DefiningScript;
bool __DefiningSwitchBlock;
bool __DefiningWhileLoop;
bool __DontCollectMethodVars;
bool __ExecutedIfStatement;
bool __ExecutedMethod;
bool __ExecutedTemplate;
bool __FailedIfStatement;
bool __FailedNest;
bool __GoToLabel;
bool __InDefaultCase;
bool __Returning;
bool __SkipDefaultBlock;
bool __UseCustomPrompt;

string __ErrorVarName;
string __LastError;
bool __ExecutedTryBlock;
bool __RaiseCatchBlock;
bool __Negligence;
bool __SkipCatchBlock;

bool suc_stat = false;

List        getDirectoryList(string before, bool filesOnly);
Method      getMethod(string s);
Object      getObject(string s);
Variable    getVariable(string s);

int indexOfConstant(string s);
int indexOfList(string s);
int indexOfMethod(string s);
int indexOfModule(string s);
int indexOfObject(string s);
int indexOfScript(string s);
int indexOfVariable(string s);

void cd(string p);
void clearAll();
void clearArgs();
void clearConstants();
void clearFor();
void clearIf();
void clearLists();
void clearMethods();
void clearObjects();
void clearVariables();
void clearWhile();
void delay(int seconds);
void displayVersion();
void executeMethod(Method m);
void executeNest(Container n);
void setFalseIf();
void failedFor();
void failedWhile();
void forLoop(Method m);
void help(string app);
void loadSavedVars(Crypt c, string &bs);
void loadScript(string script);
void loop(bool skip);
void redefine(string target, string name);
void replaceElement(string before, string after, string replacement);
void saveVariable(string var);
void writeline(string st);
void setLastValue(string s);
void setup();
void setVariable(string name, string value);
void setVariable(string name, double value);
void successfulFor();
void successfulFor(double a, double b, string op);
void setTrueIf();
void successfullWhile(string v1, string op, string v2);
void successfulFor(List list);
void executeTemplate(Method m, vector<string> vs);
void uninstall();
void whileLoop(Method m);
void write(string st);
void __true();
void __false();

void initializeVariable(string arg0, string arg1, string arg2, string s, vector<string> command);
void initializeListValues(string arg0, string arg1, string arg2, string s, vector<string> command);
void createGlobalVariable(string arg0, string arg1, string arg2, string s, vector<string> command);
void createObjectVariable(string arg0, string arg1, string arg2, string s, vector<string> command);
void copyObject(string arg0, string arg1, string arg2, string s, vector<string> command);
void createConstant(string arg0, string arg1, string arg2, string s, vector<string> command);
void executeSimpleStatement(string arg0, string arg1, string arg2, string s, vector<string> command);

void appendText(string arg1, string arg2, bool newLine);
void __fwrite(string file, string contents);

bool is(string s, string si);
bool isNumber(string varName);
bool isNumber(Variable var);
bool isScript(string path);
bool isString(string varName);
bool isString(Variable var);
bool methodExists(string s);
bool objectExists(string s);
bool variableExists(string s);
bool listExists(string s);
bool moduleExists(string s);
bool noLists();
bool noMethods();
bool noObjects();
bool noVariables();
bool notObjectMethod(string s);
bool notStandardZeroSpace(string s);
bool notStandardOneSpace(string arg1);
bool notStandardTwoSpace(string arg1);

double getBytes(string path);
double getStack(string arg2);

bool isStringStack(string arg2);
bool stackReady(string arg2);
string getStringStack(string arg2);

#endif
