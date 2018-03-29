//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SCExtendedHitButton, SCUserSession, UILabel;
@protocol SCProductCartStatusViewDelegate;

@interface SCProductCartStatusView : UIView
{
    UILabel *_cartItemCount;
    SCExtendedHitButton *_cartStatusButton;
    SCUserSession *_userSession;
    id <SCProductCartStatusViewDelegate> _delegate;
    NSString *_storeId;
}

@property(nonatomic) __weak NSString *storeId; // @synthesize storeId=_storeId;
@property(nonatomic) __weak id <SCProductCartStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)topLineItem;
- (void)_didTapOnCartStatus:(id)arg1;
- (void)hide:(_Bool)arg1;
- (void)show:(_Bool)arg1;
- (void)updateStatus;
- (void)setIconColor:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 userSession:(id)arg2;

@end

