//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SCCameraDeepLinkMetadata : NSObject
{
    NSString *_caption;
    NSString *_attachmentUrl;
    NSArray *_stickers;
}

@property(readonly, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
@property(readonly, copy, nonatomic) NSString *attachmentUrl; // @synthesize attachmentUrl=_attachmentUrl;
@property(readonly, copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
- (void).cxx_destruct;
- (id)initWithAttachmentUrl:(id)arg1 caption:(id)arg2 stickers:(id)arg3;

@end
