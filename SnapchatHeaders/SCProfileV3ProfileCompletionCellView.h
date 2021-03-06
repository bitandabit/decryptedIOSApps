//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCProfileV3CellView.h"

@class SCCircularBadgeView, SCProfileV3CellTextView, UIButton, UILabel, UILongPressGestureRecognizer;
@protocol SCProfileV3ProfileCompletionCellViewDelegate;

@interface SCProfileV3ProfileCompletionCellView : SCProfileV3CellView
{
    UILabel *_thumbnailText;
    SCProfileV3CellTextView *_text;
    UIButton *_dismissButton;
    UILongPressGestureRecognizer *_dismissButtonGesture;
    SCCircularBadgeView *_badge;
    _Bool _dismissHighlighted;
    id <SCProfileV3ProfileCompletionCellViewDelegate> _profileCompletionDelegate;
}

+ (id)cellReuseIdentifier;
@property(nonatomic) _Bool dismissHighlighted; // @synthesize dismissHighlighted=_dismissHighlighted;
@property(nonatomic) __weak id <SCProfileV3ProfileCompletionCellViewDelegate> profileCompletionDelegate; // @synthesize profileCompletionDelegate=_profileCompletionDelegate;
- (void).cxx_destruct;
- (void)handleDismissButtonTap:(id)arg1;
- (void)setBadgeVisible:(_Bool)arg1;
- (void)setupCellWithEmoji:(id)arg1 header:(id)arg2 subText:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

