//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "SCShakeScreenRecorderDelegate-Protocol.h"
#import "UIWindowScreenshotSkipping-Protocol.h"

@class NSString, SCShakeScreenRecorder, UIButton, UIView, UIViewController;
@protocol SCShakeScreenRecordingMenuWindowDelegate;

@interface SCShakeScreenRecordingMenuWindow : UIWindow <SCShakeScreenRecorderDelegate, UIWindowScreenshotSkipping>
{
    UIButton *_recordButton;
    UIButton *_cancelButton;
    UIView *_progressBar;
    SCShakeScreenRecorder *_recorder;
    id <SCShakeScreenRecordingMenuWindowDelegate> _delegate;
    UIViewController *_presentingViewController;
}

@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) id <SCShakeScreenRecordingMenuWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)shakeScreenRecorder:(id)arg1 didRecordVideoLength:(double)arg2;
- (void)_startCapture;
- (void)stopRecordButtonPressed;
- (void)takeButtonPressed;
- (void)cancelButtonPressed;
- (void)show;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

