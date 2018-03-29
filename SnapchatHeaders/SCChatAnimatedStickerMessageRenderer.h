//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatMessageRenderer-Protocol.h"

@class SCChatSDKActionContext, SCChatStickerManager, SOJUSticker;

@interface SCChatAnimatedStickerMessageRenderer : NSObject <SCChatMessageRenderer>
{
    SCChatSDKActionContext *_actionContext;
    SOJUSticker *_sticker;
    SCChatStickerManager *_chatStickerManager;
}

@property(nonatomic) __weak SCChatStickerManager *chatStickerManager; // @synthesize chatStickerManager=_chatStickerManager;
@property(retain, nonatomic) SOJUSticker *sticker; // @synthesize sticker=_sticker;
@property(nonatomic) __weak SCChatSDKActionContext *actionContext; // @synthesize actionContext=_actionContext;
- (void).cxx_destruct;
- (void)prepareContentViewForReuse:(id)arg1;
- (void)didEndDisplayingContentView:(id)arg1;
- (void)willDisplayContentView:(id)arg1;
- (struct CGSize)sizeThatFits:(double)arg1;
- (void)setupContentView:(id)arg1;
- (id)reuseIdentifier;
- (void)didTap:(struct CGPoint)arg1;
- (id)createContentView;
- (id)initWithSticker:(id)arg1;

@end

