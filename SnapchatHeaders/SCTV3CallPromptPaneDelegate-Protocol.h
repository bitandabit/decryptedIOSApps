//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCTV3CallPrompt, SCTV3CallPromptPane;

@protocol SCTV3CallPromptPaneDelegate <NSObject>
- (void)callPromptPane:(SCTV3CallPromptPane *)arg1 didEndDragCallPrompt:(SCTV3CallPrompt *)arg2 dismissed:(_Bool)arg3;
- (void)callPromptPane:(SCTV3CallPromptPane *)arg1 didMoveCallPrompt:(SCTV3CallPrompt *)arg2 visibleRatio:(double)arg3;
- (void)callPromptPane:(SCTV3CallPromptPane *)arg1 didBeginDragCallPrompt:(SCTV3CallPrompt *)arg2;
@end

