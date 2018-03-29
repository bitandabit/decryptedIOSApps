//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatSDKPlugin-Protocol.h"

@class SCChatStickerManager, SCChatStickerView, SOJUSticker, UIView, UIViewController;
@protocol SCChatCellBaseGestureDelegate;

@interface SCChatAnimatedStickerPlugin : NSObject <SCChatSDKPlugin>
{
    SOJUSticker *_sticker;
    UIView *_containerView;
    SCChatStickerView *_stickerView;
    SCChatStickerManager *_chatStickerManager;
    UIViewController<SCChatCellBaseGestureDelegate> *_parentViewController;
}

+ (id)serializeToData:(id)arg1;
@property(nonatomic) __weak UIViewController<SCChatCellBaseGestureDelegate> *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void).cxx_destruct;
- (void)_deserialize:(id)arg1;
- (long long)shouldShowTimestamp;
- (long long)shouldShowDate;
- (long long)shouldShowSender;
- (_Bool)shouldShowActionMenu;
- (_Bool)shouldShowSenderLine;
- (_Bool)isStackable;
- (_Bool)isSavable;
- (void)didTap:(struct CGPoint)arg1;
- (void)prepareViewForReuse:(id)arg1;
- (void)populateContentView:(id)arg1;
- (void)initializeContentOnView:(id)arg1;
- (void)setChatMessageStatus:(unsigned long long)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)setData:(id)arg1;
- (struct CGSize)sizeThatFits:(double)arg1;

@end

