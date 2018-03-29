//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDImageData, NSString;

@interface IDPreview : NSObject
{
    long long _type;
    long long _stateId;
    long long _textId;
    long long _secondTextId;
    long long _thirdTextId;
    long long _imageId;
    NSString *_text;
    NSString *_secondText;
    NSString *_thirdText;
    IDImageData *_imageData;
}

+ (id)new;
+ (id)extendedEntertainmentDetailsPreviewWithText:(id)arg1 secondText:(id)arg2 thirdText:(id)arg3 imageId:(long long)arg4;
+ (id)extendedEntertainmentDetailsPreviewWithText:(id)arg1 secondText:(id)arg2 thirdText:(id)arg3 imageData:(id)arg4;
+ (id)entertainmentDetailsPreviewWithText:(id)arg1 imageId:(long long)arg2;
+ (id)entertainmentDetailsPreviewWithText:(id)arg1 imageData:(id)arg2;
+ (id)contentPreviewWithText:(id)arg1 imageData:(id)arg2;
+ (id)contentPreviewWithTextId:(long long)arg1 imageData:(id)arg2;
+ (id)contentPreviewWithTextId:(long long)arg1 imageId:(long long)arg2;
+ (id)contentPreviewWithText:(id)arg1 imageId:(long long)arg2;
+ (id)statePreviewWithId:(long long)arg1;
@property(retain) IDImageData *imageData; // @synthesize imageData=_imageData;
@property(retain) NSString *thirdText; // @synthesize thirdText=_thirdText;
@property(retain) NSString *secondText; // @synthesize secondText=_secondText;
@property(retain) NSString *text; // @synthesize text=_text;
@property long long imageId; // @synthesize imageId=_imageId;
@property long long thirdTextId; // @synthesize thirdTextId=_thirdTextId;
@property long long secondTextId; // @synthesize secondTextId=_secondTextId;
@property long long textId; // @synthesize textId=_textId;
@property long long stateId; // @synthesize stateId=_stateId;
@property(readonly) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)previewTypeStringWithPreviewType:(long long)arg1;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqualToIDPreview:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)extendedEntertainmentDetailsTableDataRepresentation;
- (id)entertainmentDetailsTableDataRepresentation;
- (id)contentTableDataRepresentation;
- (id)stateTableDataRepresentation;
- (id)tableDataRepresentation;
- (id)init;
- (id)initWithType:(long long)arg1;

@end
