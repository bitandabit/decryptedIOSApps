//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCContextContentLoaderProtocol-Protocol.h"

@class NSError, NSString, NSURL, SCContextSession, UIImage;

@interface SCContextProtoImageContentLoader : NSObject <SCContextContentLoaderProtocol>
{
    UIImage *_image;
    NSURL *_url;
    NSString *_key;
    NSString *_iv;
    NSError *_error;
    SCContextSession *_session;
    double _scaleFactor;
    _Bool _authenticated;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)_complete:(id)arg1 error:(id)arg2;
- (void)_decodeImage:(id)arg1;
- (void)loadContent:(CDUnknownBlockType)arg1;
- (id)initWithImageProto:(id)arg1 contextSession:(id)arg2;

@end

