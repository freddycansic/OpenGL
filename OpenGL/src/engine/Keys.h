#pragma once

// stolen from glfw3.h lines ~315 - ~518
namespace Keys {

	constexpr unsigned int SPACE           =   32;
	constexpr unsigned int APOSTROPHE      =   39;
	constexpr unsigned int COMMA           =   44;
	constexpr unsigned int MINUS           =   45;
	constexpr unsigned int PERIOD          =   46;
	constexpr unsigned int SLASH           =   47;
	constexpr unsigned int ZERO            =   48;
	constexpr unsigned int ONE			   =   49;
	constexpr unsigned int TWO			   =   50;
	constexpr unsigned int THREE           =   51;
	constexpr unsigned int FOUR			   =   52;
	constexpr unsigned int FIVE			   =   53;
	constexpr unsigned int SIX			   =   54;
	constexpr unsigned int SEVEN		   =   55;
	constexpr unsigned int EIGHT		   =   56;
	constexpr unsigned int NINE			   =   57;
	constexpr unsigned int SEMICOLON       =   59;
	constexpr unsigned int EQUAL           =   61;
	constexpr unsigned int A               =   65;
	constexpr unsigned int B               =   66;
	constexpr unsigned int C               =   67;
	constexpr unsigned int D               =   68;
	constexpr unsigned int E               =   69;
	constexpr unsigned int F               =   70;
	constexpr unsigned int G               =   71;
	constexpr unsigned int H               =   72;
	constexpr unsigned int I               =   73;
	constexpr unsigned int J               =   74;
	constexpr unsigned int K               =   75;
	constexpr unsigned int L               =   76;
	constexpr unsigned int M               =   77;
	constexpr unsigned int N               =   78;
	constexpr unsigned int O               =   79;
	constexpr unsigned int P               =   80;
	constexpr unsigned int Q               =   81;
	constexpr unsigned int R               =   82;
	constexpr unsigned int S               =   83;
	constexpr unsigned int T               =   84;
	constexpr unsigned int U               =   85;
	constexpr unsigned int V               =   86;
	constexpr unsigned int W               =   87;
	constexpr unsigned int X               =   88;
	constexpr unsigned int Y               =   89;
	constexpr unsigned int Z               =   90;
	constexpr unsigned int LEFT_BRACKET    =   91;  
	constexpr unsigned int BACKSLASH       =   92;  
	constexpr unsigned int RIGHT_BRACKET   =   93;  
	constexpr unsigned int GRAVE_ACCENT    =   96;  
	constexpr unsigned int WORLD_1		   =   161;
	constexpr unsigned int WORLD_2		   =   162;

	constexpr unsigned int ESCAPE		   =   256;
	constexpr unsigned int ENTER           =   257;
	constexpr unsigned int TAB             =   258;
	constexpr unsigned int BACKSPACE       =   259;
	constexpr unsigned int INSERT          =   260;
	constexpr unsigned int DELETE          =   261;
	constexpr unsigned int RIGHT           =   262;
	constexpr unsigned int LEFT            =   263;
	constexpr unsigned int DOWN            =   264;
	constexpr unsigned int UP              =   265;
	constexpr unsigned int PAGE_UP         =   266;
	constexpr unsigned int PAGE_DOWN       =   267;
	constexpr unsigned int HOME            =   268;
	constexpr unsigned int END             =   269;
	constexpr unsigned int CAPS_LOCK       =   280;
	constexpr unsigned int SCROLL_LOCK     =   281;
	constexpr unsigned int NUM_LOCK        =   282;
	constexpr unsigned int PRINT_SCREEN    =   283;
	constexpr unsigned int PAUSE           =   284;
	constexpr unsigned int F1              =   290;
	constexpr unsigned int F2              =   291;
	constexpr unsigned int F3              =   292;
	constexpr unsigned int F4              =   293;
	constexpr unsigned int F5              =   294;
	constexpr unsigned int F6              =   295;
	constexpr unsigned int F7              =   296;
	constexpr unsigned int F8              =   297;
	constexpr unsigned int F9              =   298;
	constexpr unsigned int F10             =   299;
	constexpr unsigned int F11             =   300;
	constexpr unsigned int F12             =   301;
	constexpr unsigned int F13             =   302;
	constexpr unsigned int F14             =   303;
	constexpr unsigned int F15             =   304;
	constexpr unsigned int F16             =   305;
	constexpr unsigned int F17             =   306;
	constexpr unsigned int F18             =   307;
	constexpr unsigned int F19             =   308;
	constexpr unsigned int F20             =   309;
	constexpr unsigned int F21             =   310;
	constexpr unsigned int F22             =   311;
	constexpr unsigned int F23             =   312;
	constexpr unsigned int F24             =   313;
	constexpr unsigned int F25             =   314;
	constexpr unsigned int KP_0            =   320;
	constexpr unsigned int KP_1            =   321;
	constexpr unsigned int KP_2            =   322;
	constexpr unsigned int KP_3            =   323;
	constexpr unsigned int KP_4            =   324;
	constexpr unsigned int KP_5            =   325;
	constexpr unsigned int KP_6            =   326;
	constexpr unsigned int KP_7            =   327;
	constexpr unsigned int KP_8            =   328;
	constexpr unsigned int KP_9            =   329;
	constexpr unsigned int KP_DECIMAL      =   330;
	constexpr unsigned int KP_DIVIDE       =   331;
	constexpr unsigned int KP_MULTIPLY     =   332;
	constexpr unsigned int KP_SUBTRACT     =   333;
	constexpr unsigned int KP_ADD          =   334;
	constexpr unsigned int KP_ENTER        =   335;
	constexpr unsigned int KP_EQUAL        =   336;
	constexpr unsigned int LEFT_SHIFT      =   340;
	constexpr unsigned int LEFT_CONTROL    =   341;
	constexpr unsigned int LEFT_ALT        =   342;
	constexpr unsigned int LEFT_SUPER      =   343;
	constexpr unsigned int RIGHT_SHIFT     =   344;
	constexpr unsigned int RIGHT_CONTROL   =   345;
	constexpr unsigned int RIGHT_ALT       =   346;
	constexpr unsigned int RIGHT_SUPER     =   347;
	constexpr unsigned int MENU            =   348;
	constexpr unsigned int LAST = MENU;

}