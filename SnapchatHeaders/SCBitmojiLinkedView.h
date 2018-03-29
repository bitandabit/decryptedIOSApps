//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCLoadingIndicatorView, UIImageView, UILabel;
@protocol SCBitmojiLinkedViewDelegate;

@interface SCBitmojiLinkedView : UIView
{
    SCLoadingIndicatorView *_loadingIndicator;
    UIImageView *_avatarImageView;
    UILabel *_unlinkLabel;
    id <SCBitmojiLinkedViewDelegate> _delegate;
}

+ (id)view:(id)arg1;
- (void).cxx_destruct;
- (void)_didTapUnlinkLabel;
- (void)updateUnlinkLabel:(_Bool)arg1;
- (void)updateAvatar:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
