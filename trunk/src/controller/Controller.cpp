#include <iostream>
#include <string>

#include <Wt/WApplication>
#include <Wt/WEnvironment>
#include <Wt/WContainerWidget>
#include <Wt/WText>

#include "Controller.h"

using namespace Wt;

/*
 * The env argument contains information about the new session, and
 * the initial request. It must be passed to the WApplication
 * constructor so it is typically also an argument for your custom
 * application constructor.
*/
Controller::Controller(const WEnvironment& env) : WApplication(env)
{
	// set the title of the browser window
	setTitle("KKCW Tournament Manager");
	
	// add some text to html page
	WContainerWidget *textdiv = new WContainerWidget(root());
	textdiv->setStyleClass("text");

	new WText("<h2>KKCW Tournament Manager</h2>", textdiv);
	new WText("Created by Cahit Atilgan & Felix Mueller<br />",textdiv);
}

WApplication *createApplication(const WEnvironment& env)
{
  return new Controller(env);
}

int main(int argc, char **argv)
{
	return WRun(argc, argv, &createApplication);
}