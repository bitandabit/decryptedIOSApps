//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class SCLoadingIndicatorView;
@protocol SCSnapAdsPortalButtonDelegate;

@interface SCSnapAdsPortalButton : UIButton
{
    SCLoadingIndicatorView *_indicator;
    id <SCSnapAdsPortalButtonDelegate> _delegate;
}

+ (id)_backgroundColor_Grey;
+ (id)_backgroundColor_Green;
+ (double)buttonBottomPadding;
@property(nonatomic) __weak id <SCSnapAdsPortalButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonPressed;
- (id)initWithText:(id)arg1 view:(id)arg2;

@end

