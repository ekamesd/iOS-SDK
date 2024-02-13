//
//  Mtcnn.h
//  TrainingApp
//
//  Created by Ekam  on 2020-05-04.
//

#ifndef Mtcnn_h
#define Mtcnn_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@class NCNNWrapper;
@interface NCNNWrapper : NSObject

//@property (nonatomic) NostalgiaCamera *nostalgiaWrapper;

-(instancetype)init;
-(nonnull NSString *)openCVVersionString;
-(nonnull UIImage *)cvtColorBGR2GRAY:(nonnull UIImage *)input_image;
//-(bool)reSampleFace:(nonnull UIImage *)rawImage;
-(UIImage *)getInfo85: (nonnull UIImage *)rawImage
                    andTopPos: (CGFloat)ovalTop
                    andBottomPos: (CGFloat)ovalBot
                    andRightPos: (CGFloat)ovalRight
                    andLeftPos: (CGFloat)ovalLeft
                    andCentreX: (CGFloat)centreX
                    andCentreY: (CGFloat)centreY;
-(UIImage *)getInfo84: (nonnull UIImage *)rawImage
                    andTopPos: (CGFloat)ovalTop
                    andBottomPos: (CGFloat)ovalBot
                    andRightPos: (CGFloat)ovalRight
                    andLeftPos: (CGFloat)ovalLeft
                    andCentreX: (CGFloat)centreX
                    andCentreY: (CGFloat)centreY;
-(nonnull NSString *)getInfo83;
-(int)getInfo82;
-(void)getInfo81;
-(bool)getInfo80; //transitionBetweenStages
-(bool)getInfo79;
-(nonnull NSString *)getInfo78;
-(bool)getInfo77;
-(bool)getInfo76;
-(int)getInfo75;
-(bool)getInfo74;
-(bool)getInfo73;
-(NSString *_Nonnull)getInfo72;
-(bool)getInfo71;
-(float)getInfo70;
-(bool)getInfo69;
-(int)getInfo68;
//-(LivenessResults)getLivenessResults;

-(int)getInfo;
-(int)getInfo3;
-(int)getInfo2;
-(int)getInfo4;
-(int)getInfo5;
-(int)getInfo6;
-(int)getInfo7;
-(NSString *_Nonnull)getInfo8;
-(NSString *_Nonnull)getInfo9;
-(NSString *_Nonnull)getInfo10;
-(NSString *_Nonnull)getInfo11;
-(NSString *_Nonnull)getInfo13;
-(NSString *_Nonnull)getInfo12;
-(NSString *_Nonnull)getInfo17;
-(NSString *_Nonnull)getInfo14;
-(NSString *_Nonnull)getInfo18;
-(NSString *_Nonnull)getInfo19;
-(NSString *_Nonnull)getInfo41;
-(NSString *_Nonnull)getInfo20;
-(NSString *_Nonnull)getObject;
-(NSString *_Nonnull)getInfo21;
-(NSString *_Nonnull)getInfo23;
-(NSString *_Nonnull)getInfo22;
-(bool)getInfo24;
-(bool)getInfo26;
-(NSString *_Nonnull)getInfo25;
-(bool)getInfo27;
-(NSString *_Nonnull)getInfo33;
-(NSString *_Nonnull)getInfo34;
-(NSString *_Nonnull)getInfo35;
-(NSString *_Nonnull)getInfo36;
-(NSString *_Nonnull)getInfo37;
-(NSString *_Nonnull)getInfo38;
-(NSString *_Nonnull)getInfo39;
-(NSString *_Nonnull)getInfo40;
-(NSString *_Nonnull)getInfo16;
-(NSString *_Nonnull)getInfo15;
-(NSString *_Nonnull)getInfo29;
-(NSString *_Nonnull)getInfo28;
-(NSString *_Nonnull)getInfo30;
-(NSString *_Nonnull)getInfo31;
-(NSString *_Nonnull)getInfo32;

-(NSString *_Nonnull)getInfo42;
-(NSString *_Nonnull)getInfo43;
-(NSString *_Nonnull)getInfo44;
-(NSString *_Nonnull)getInfo45;
-(NSString *_Nonnull)getInfo46;
-(NSString *_Nonnull)getInfo47;
-(NSString *_Nonnull)getInfo48;
-(NSString *_Nonnull)getInfo49;
-(NSString *_Nonnull)getInfo50;
-(NSString *_Nonnull)getInfo51;
-(NSString *_Nonnull)getInfo52;
-(NSString *_Nonnull)getInfo53;
-(NSString *_Nonnull)getInfo54;
-(NSString *_Nonnull)getInfo55;
-(NSString *_Nonnull)getInfo56;
-(NSString *_Nonnull)getInfo57;
-(NSString *_Nonnull)getInfo58;
-(NSString *_Nonnull)getInfo59;
-(NSString *_Nonnull)getInfo60;
-(NSString *_Nonnull)getInfo61;
-(void)getInfo62;
-(bool)getInfo63:(nonnull UIImage *)input_image;
-(bool)getInfo64: (nonnull UIImage *)rawImage;
-(bool)getInfo65;
-(NSString *_Nonnull)getInfo66;
-(NSString *_Nonnull)getInfo67;

@end

#endif /* Mtcnn_h */

