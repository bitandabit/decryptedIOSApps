//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, PreviewViewController;

@protocol SendSnapNavigationControllerDelegate <NSObject>
- (void)didCancelFromPreview:(PreviewViewController *)arg1;

@optional
- (void)didPostNewlyCreatedGroupStories:(NSArray *)arg1;
- (void)didPostStoryWithCompletion:(void (^)(void))arg1;
- (void)didPostStory;
- (void)didSaveSnapWithParameters:(NSDictionary *)arg1;
- (void)didSendToGallery;
- (void)didSendChatMessage;
- (void)didSendDiscoverSharedMessageWithParameters:(NSDictionary *)arg1;
- (void)didSendSnaps:(NSArray *)arg1;
- (void)didComeFromCameraWithoutSendingSnap;
@end
