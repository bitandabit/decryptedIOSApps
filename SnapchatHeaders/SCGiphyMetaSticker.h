//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SCGiphyMetaSticker : NSObject
{
    NSString *_type;
    NSString *_resourceUrl;
    NSString *_giphyId;
}

@property(readonly, copy, nonatomic) NSString *giphyId; // @synthesize giphyId=_giphyId;
@property(readonly, copy, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)toSOJUSticker;
- (id)initWithGiphyMetadata:(id)arg1;

@end
