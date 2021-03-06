//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;
@protocol SCSearchChatViewDelegate;

@interface SCSearchChatView : UIView
{
    UIView *_backgroundView;
    UIImageView *_dismissButtonImageView;
    UILabel *_userDisplayNameLabel;
    id <SCSearchChatViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSearchChatViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dismissChatView:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *userDisplayName;
- (id)initWithFrame:(struct CGRect)arg1;

@end

