//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBComponentImageDataBuilder.h"
#import "NSCopying.h"

@class NSBundle, NSMutableDictionary, NSString, NSURL, UIImage;

@interface EXP_HUBComponentImageDataBuilderImplementation : NSObject <EXP_HUBComponentImageDataBuilder, NSCopying>
{
    NSURL *_URL;
    NSString *_placeholderIconIdentifier;
    UIImage *_localImage;
    NSMutableDictionary *_customData;
    NSBundle *_bundle;
    id <EXP_HUBJSONSchema> _JSONSchema;
    id <EXP_HUBIconImageResolver> _iconImageResolver;
}

@property(readonly, nonatomic) id <EXP_HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) id <EXP_HUBJSONSchema> JSONSchema; // @synthesize JSONSchema=_JSONSchema;
@property(nonatomic) __weak NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) NSMutableDictionary *customData; // @synthesize customData=_customData;
@property(retain, nonatomic) UIImage *localImage; // @synthesize localImage=_localImage;
@property(copy, nonatomic) NSString *placeholderIconIdentifier; // @synthesize placeholderIconIdentifier=_placeholderIconIdentifier;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)buildPlaceholderIcon;
- (id)buildWithIdentifier:(id)arg1 type:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addJSONDictionary:(id)arg1;
- (_Bool)addJSONData:(id)arg1 error:(id *)arg2;
- (id)initWithJSONSchema:(id)arg1 iconImageResolver:(id)arg2;

@end

