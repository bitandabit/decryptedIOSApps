//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCButton, SCShakeSeparatorView, UIView;
@protocol SCShakeSubmitDelegate;

@interface SCShakeSubmitViewProvider : NSObject
{
    _Bool _enabled;
    id <SCShakeSubmitDelegate> _delegate;
    SCShakeSeparatorView *_footerSeparator;
    SCButton *_submitButton;
    UIView *_submitButtonContainer;
}

@property(retain, nonatomic) UIView *submitButtonContainer; // @synthesize submitButtonContainer=_submitButtonContainer;
@property(retain, nonatomic) SCButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) SCShakeSeparatorView *footerSeparator; // @synthesize footerSeparator=_footerSeparator;
@property(nonatomic) __weak id <SCShakeSubmitDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_submitClicked:(id)arg1;
- (void)enableSubmitButton:(_Bool)arg1;
- (void)hideSubmitButton:(_Bool)arg1;
- (id)initWithSize:(unsigned long long)arg1;

@end

