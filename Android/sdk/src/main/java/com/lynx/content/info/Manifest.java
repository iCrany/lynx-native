// Copyright 2017 The Lynx Authors. All rights reserved.
package com.lynx.content.info;

public class Manifest {

    private App application;

    private boolean debug = false;

    public App getApplication() {
        return application;
    }

    public void setApplication(App application) {
        this.application = application;
    }

    public boolean isDebuggable() {
        return debug;
    }
}
