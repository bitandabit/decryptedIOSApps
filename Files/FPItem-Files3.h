//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/FPItem.h>

@interface FPItem (Files3)
+ (void)performDrop:(id)arg1 underItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)performExternalDrop:(id)arg1 underItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)fpItemsFromDropSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)fpItemsFromLocalDropSession:(id)arg1 itemType:(id)arg2;
+ (void)locationsFromDropSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)sessionContainsFile:(id)arg1;
+ (_Bool)sessionContainsLocations:(id)arg1;
+ (_Bool)sessionContainsFavorites:(id)arg1;
+ (_Bool)sessionContainsFPItem:(id)arg1;
@property(nonatomic, readonly) long long dataOwner;
- (_Bool)isValidDropTargetForUTIs:(id)arg1;
@end

