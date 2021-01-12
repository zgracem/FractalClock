//
//  FractalClockView.h
//  FractalClock
//
//  Created by Rob Mayoff on 5/20/07.
//  Updated for macOS 10.15 by Amy Grace on 1/12/21.
//  Copyright (c) 2007 Rob Mayoff, 2021 Amy Grace.
//  Dedicated to the public domain.
//

#import <ScreenSaver/ScreenSaver.h>


@interface FractalClockView : ScreenSaverView 
{
    NSOpenGLContext* glContext;
}

@end
