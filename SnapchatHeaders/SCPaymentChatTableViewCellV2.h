//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTextChatTableViewCellV2.h"

@class SCPaymentMediaCardView;
@protocol SCChatCellMessageStateUpdateDelegate;

@interface SCPaymentChatTableViewCellV2 : SCTextChatTableViewCellV2
{
    id <SCChatCellMessageStateUpdateDelegate> _delegate;
    _Bool _activeCashTouch;
    SCPaymentMediaCardView *_paymentMediaCardView;
}

@property(retain, nonatomic) SCPaymentMediaCardView *paymentMediaCardView; // @synthesize paymentMediaCardView=_paymentMediaCardView;
@property(nonatomic) _Bool activeCashTouch; // @synthesize activeCashTouch=_activeCashTouch;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)animateSwipeToSendReceiverSparklesIfNecessary;
- (_Bool)touchHitsPaymentMediaCard:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)resetWithOriginalContent;
- (id)actionMenuContentViewForIndex:(unsigned long long)arg1;
- (void)renderMetadata;
- (void)_renderPaymentMediaCardView;
- (void)renderMediaCards;
- (void)layoutSubviews;
- (void)_initPaymentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 userSession:(id)arg4;
- (id)paymentViewModel;

@end
