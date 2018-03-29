//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCLoadingIndicatorView, UIImageView, UILabel;

@interface SCSerengetiLoadingView : UIView
{
    SCLoadingIndicatorView *_indicatorView;
    UILabel *_errorLabel;
    UIImageView *_errorImageView;
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_updateViewsBasedOnCurrentState;
- (void)_setAsError;
- (void)_setAsLoading;
- (void)_teardownViews;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

