//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache, SCBitmojiManager;

@interface SCMapPersonAvatarGenerator : NSObject
{
    NSCache *_bitmojiCache;
    SCBitmojiManager *_bitmojiManager;
}

+ (id)imageIdentifierForPerson:(id)arg1 overrideStickerId:(id)arg2 supportDratini:(_Bool)arg3 stickerDynamicElements:(id)arg4 clustered:(_Bool)arg5;
+ (id)imageIdentifierForPerson:(id)arg1 overrideStickerId:(id)arg2 supportDratini:(_Bool)arg3;
@property(retain, nonatomic) SCBitmojiManager *bitmojiManager; // @synthesize bitmojiManager=_bitmojiManager;
@property(retain, nonatomic) NSCache *bitmojiCache; // @synthesize bitmojiCache=_bitmojiCache;
- (void).cxx_destruct;
- (void)_cacheBitmojiImage:(id)arg1 forPerson:(id)arg2 overrideStickerId:(id)arg3 supportDratini:(_Bool)arg4;
- (id)_cachedBitmojiImageForPerson:(id)arg1 overrideStickerId:(id)arg2 supportDratini:(_Bool)arg3;
- (void)clearCache;
- (void)fetchBitmojiOrFallbackSillhouetteForPerson:(id)arg1 overrideStickerId:(id)arg2 clustered:(_Bool)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_imageWithStickerDynamicElements:(id)arg1 onImage:(id)arg2 clustered:(_Bool)arg3;
- (void)fetchBitmojiImageForPerson:(id)arg1 overrideStickerId:(id)arg2 supportDratini:(_Bool)arg3 stickerDynamicElements:(id)arg4 clustered:(_Bool)arg5 completionQueue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)initWithBitmojiManager:(id)arg1;

@end

