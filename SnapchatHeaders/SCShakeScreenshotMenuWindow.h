//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class UIButton, UIViewController;
@protocol SCShakeScreenshotMenuWindowDelegate;

@interface SCShakeScreenshotMenuWindow : UIWindow
{
    UIButton *_takeButton;
    UIButton *_cancelButton;
    id <SCShakeScreenshotMenuWindowDelegate> _delegate;
    UIViewController *_presentingViewController;
}

@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) id <SCShakeScreenshotMenuWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)takeButtonPressed;
- (void)cancelButtonPressed;
- (void)show;
- (id)init;

@end

